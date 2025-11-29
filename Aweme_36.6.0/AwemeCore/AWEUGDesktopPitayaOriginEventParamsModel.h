@class NSString;

@interface AWEUGDesktopPitayaOriginEventParamsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL needLoading;
@property (copy, nonatomic) NSString *logExtraString;
@property (copy, nonatomic) NSString *eventExtraString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
