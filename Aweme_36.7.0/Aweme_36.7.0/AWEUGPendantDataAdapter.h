@class NSArray, NSMutableDictionary, NSString;

@interface AWEUGPendantDataAdapter : NSObject <AWEUGPendantDataAdapterProtocol>

@property (retain, nonatomic) NSArray *activityArr;
@property (retain, nonatomic) NSMutableDictionary *activityDic;
@property (retain, nonatomic) NSArray *pendantResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
