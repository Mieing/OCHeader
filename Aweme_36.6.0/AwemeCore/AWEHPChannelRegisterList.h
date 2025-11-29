@class NSMutableDictionary;

@interface AWEHPChannelRegisterList : NSObject

@property (retain, nonatomic) NSMutableDictionary *channelTypeToConfig;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadSplitScreenAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINLiteAdaperClass;
+ (Class)aAWEFeedModuleServiceDOUYINAdaperClass;
+ (Class)aAWEHomepageChannelDOUYINHTSAdapterClass;
+ (Class)aAWEHomepageChannelDOUYINLGAdapterClass;
+ (Class)aAWEHomepageChannelDOUYINJXAdapterClass;
+ (id)sharedInstance;

- (id)aAWEPadModuleAdapter;
- (id)aAWEPadSplitScreenAdapter;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)aAWEFeedModuleServiceDOUYINLiteAdaper;
- (id)aAWEFeedModuleServiceDOUYINAdaper;
- (id)getChannelConfigWithChannelType:(id)a0;
- (BOOL)registerChannelWithConfig:(id)a0;
- (id)aAWEHomepageChannelDOUYINJXAdapter;
- (id)aAWEHomepageChannelDOUYINHTSAdapter;
- (id)aAWEHomepageChannelDOUYINLGAdapter;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
