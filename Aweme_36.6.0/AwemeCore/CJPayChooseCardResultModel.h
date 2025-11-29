@class CJPayDefaultChannelShowConfig;

@interface CJPayChooseCardResultModel : NSObject

@property (nonatomic) BOOL isCancel;
@property (nonatomic) BOOL isNewCard;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *config;

- (void).cxx_destruct;

@end
