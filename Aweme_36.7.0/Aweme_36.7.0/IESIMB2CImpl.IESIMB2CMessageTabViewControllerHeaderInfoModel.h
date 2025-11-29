@class NSString, NSAttributedString, IESIMCodeGenMsgTabTitleInfoModel;

@interface IESIMB2CImpl.IESIMB2CMessageTabViewControllerHeaderInfoModel : NSObject <IESIMB2CMessageTabViewControllerHeaderInfoInterface> {
    void /* function */ schema;
    void /* function */ linkText;
}

@property (nonatomic, copy) NSString *schema;
@property (nonatomic, copy) NSString *linkText;
@property (nonatomic, retain) IESIMCodeGenMsgTabTitleInfoModel *msgTabInfoModel;
@property (nonatomic) long long msgTabType;
@property (nonatomic, retain) NSAttributedString *attributeTitle;

- (void).cxx_destruct;
- (id)init;

@end
