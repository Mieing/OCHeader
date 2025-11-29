@class OpenLiteAppInfo;

@interface MMCreateLiteAppCallbackInfo : NSObject

@property (retain, nonatomic) OpenLiteAppInfo *openInfo;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) unsigned long long time;
@property (nonatomic) BOOL isLoading;

- (void).cxx_destruct;

@end
