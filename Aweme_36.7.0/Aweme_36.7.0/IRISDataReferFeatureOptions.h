@class NSString, NSArray;

@interface IRISDataReferFeatureOptions : NSObject

@property (nonatomic) unsigned long long strategies;
@property (nonatomic) BOOL snapshotEnabled;
@property (copy, nonatomic) NSString *snapshotURLString;
@property (nonatomic) double refreshInterval;
@property (nonatomic) double postActionDelayInterval;
@property (nonatomic) double postActionReferDelayInterval;
@property (nonatomic) double maxRefreshTimes;
@property (nonatomic) BOOL referIncludePosition;
@property (nonatomic) BOOL isPathCarriesID;
@property (nonatomic) BOOL isClassIdCarriesHashID;
@property (nonatomic) BOOL isElementPathIgnoreIntermediate;
@property (nonatomic) BOOL isAspectOrientedViewController;
@property (nonatomic) BOOL isAspectOrientedApplicationEvent;
@property (nonatomic) BOOL isAspectOrientedActionCallback;
@property (retain, nonatomic) NSArray *controllersMarkedAsComponent;
@property (retain, nonatomic) NSArray *blockedAspectActions;
@property (nonatomic) BOOL builtInEventEnabled;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)_parseDictionary:(id)a0;

@end
