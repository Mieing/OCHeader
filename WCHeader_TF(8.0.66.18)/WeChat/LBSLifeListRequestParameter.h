@class NSString, CLLocation;

@interface LBSLifeListRequestParameter : NSObject

@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int entryTime;
@property (nonatomic) BOOL fromStart;
@property (retain, nonatomic) NSString *keyword;
@property (nonatomic) BOOL requestFullRange;

- (void).cxx_destruct;

@end
