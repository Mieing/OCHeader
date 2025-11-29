@class NSString, NSDictionary, UIView, BDPUniqueID, NSError;
@protocol BDPFlowAdViewProtocol;

@interface BDPFlowAd : NSObject <BDPFlowAdProtocol>

@property (retain, nonatomic) NSString *flowAdId;
@property (retain, nonatomic) UIView<BDPFlowAdViewProtocol> *flowAdView;
@property (copy, nonatomic) NSString *adUnitId;
@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL isForceFlowAd;
@property (nonatomic) BOOL isPreloaded;
@property (copy, nonatomic) NSDictionary *feExtraInfo;
@property (copy, nonatomic) id /* block */ cachedCallback;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) double requestStart;
@property (nonatomic) double requestEnd;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSString *bookID;
@property (nonatomic) BOOL managedAdPolicy;
@property (retain, nonatomic) NSDictionary *businessPassInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genFlowAdId;

@end
