@class BTRecommendAccountData, BTRecommendAppMsg, NSString;

@interface BTBaseRecommendAppMsgCellViewModel : BTBaseRecommendMsgCellViewModel

@property (readonly, nonatomic) BTRecommendAccountData *accountData;
@property (readonly, nonatomic) BTRecommendAppMsg *appMsg;
@property (readonly, nonatomic) NSString *coverUrl;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL isShowLargeCover;
@property (readonly, nonatomic) unsigned int accountIndex;
@property (readonly, nonatomic) unsigned int appMsgIndex;

+ (id)createModelWithSectionData:(id)a0 msgWrap:(id)a1 itemIndex:(unsigned int)a2 accountIndex:(unsigned int)a3 appMsgIndex:(unsigned int)a4 viewWidth:(double)a5;
+ (BOOL)canCreateViewModelWithSectionData:(id)a0 accountIndex:(unsigned int)a1 appMsgIndex:(unsigned int)a2;
+ (id)classNameArr;

- (void)updateWithSectionData:(id)a0 msgWrap:(id)a1 itemIndex:(unsigned int)a2 accountIndex:(unsigned int)a3 appMsgIndex:(unsigned int)a4 viewWidth:(double)a5;
- (void)updateCellHeight:(double)a0;
- (id)contact;

@end
