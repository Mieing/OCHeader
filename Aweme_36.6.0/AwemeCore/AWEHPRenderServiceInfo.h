@class NSString, AWEHPTopTabEditModel;

@interface AWEHPRenderServiceInfo : NSObject

@property (nonatomic) unsigned long long requestType;
@property (nonatomic) BOOL canHotReload;
@property (retain, nonatomic) AWEHPTopTabEditModel *editTab;
@property (nonatomic) BOOL isRequesting;
@property (copy, nonatomic) NSString *deviceID;
@property (nonatomic) BOOL hasAgreed;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
