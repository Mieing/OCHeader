@class AWEIMIncentiveChatCellConfDetail;

@interface AWEIMIncentiveChatCellConf : NSObject

@property (retain, nonatomic) AWEIMIncentiveChatCellConfDetail *commonConf;
@property (retain, nonatomic) AWEIMIncentiveChatCellConfDetail *privateUpdateQuotaConf;
@property (retain, nonatomic) AWEIMIncentiveChatCellConfDetail *groupUpdateQuotaConf;

- (id)dictionaryRawData;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
