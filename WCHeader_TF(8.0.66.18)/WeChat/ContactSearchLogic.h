@class NSString;
@protocol ContactSearchLogicDelegate;

@interface ContactSearchLogic : NSObject <PBMessageObserverDelegate> {
    unsigned int m_uiQRFromScene;
    unsigned int m_uiThirdFromScene;
}

@property (retain, nonatomic) NSString *openIMContactUrl;
@property (weak, nonatomic) id<ContactSearchLogicDelegate> delegate;

+ (void)fillToCContact:(id)a0 from:(id)a1;
+ (void)fillToSearchReq:(id)a0 fromContext:(id)a1;

- (void)qrSearchOpenIMContact:(id)a0 FromScene:(unsigned int)a1 a8keyScene:(unsigned int)a2 subScene:(unsigned int)a3 context:(id)a4;
- (void)searchOpenIMContactForThird:(id)a0 scene:(unsigned int)a1 spamContext:(id)a2 context:(id)a3 extInfo:(id)a4;
- (void)searchOpenIMContactForThirdWithDic:(id)a0 scene:(unsigned int)a1 spamContext:(id)a2 context:(id)a3 extInfo:(id)a4;
- (void)searchOpenIMContactWithPhoneNumber:(id)a0;
- (void)handleSearchOpenIMContactResp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
