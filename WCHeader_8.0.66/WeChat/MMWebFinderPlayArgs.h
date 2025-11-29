@class NSString, WCFinderFeedMediaWrap, WCPlayerPlayArgs;

@interface MMWebFinderPlayArgs : NSObject

@property (copy, nonatomic) NSString *requestData;
@property (retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap;
@property (retain, nonatomic) WCPlayerPlayArgs *playerInfo;

- (void).cxx_destruct;

@end
