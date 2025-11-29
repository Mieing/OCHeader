@class NSArray, NSString;

@interface AWEPOIBTMCheckInterceptor : NSObject <AWEPOITrackerInterceptor>

@property (copy, nonatomic) NSArray *checkNodeList;
@property (copy, nonatomic) NSArray *skipList;
@property (nonatomic) unsigned long long checkType;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1 btmInfo:(id)a2;
- (id)newTrackParamsWithEvent:(id)a0 oldParams:(id)a1 btmInfo:(id)a2;
- (void).cxx_destruct;

@end
