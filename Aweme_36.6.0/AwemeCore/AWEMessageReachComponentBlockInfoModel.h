@class AWEMessageReachComponentModel, NSString, NSDictionary, NSArray, AWEMessageReachParamContext;

@interface AWEMessageReachComponentBlockInfoModel : NSObject

@property (copy, nonatomic) NSString *channelID;
@property (retain, nonatomic) AWEMessageReachParamContext *paramContext;
@property (nonatomic) long long blockCode;
@property (copy, nonatomic) NSString *blockDesc;
@property (nonatomic) BOOL fromCache;
@property (nonatomic) long long result;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSArray *componentList;
@property (retain, nonatomic) AWEMessageReachComponentModel *componentModel;

- (void).cxx_destruct;

@end
