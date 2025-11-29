@class NSString, NSMutableArray;

@interface WCADVideoWrap : NSObject

@property (retain, nonatomic) NSString *adID;
@property (retain, nonatomic) NSString *publishID;
@property (retain, nonatomic) NSString *uxInfo;
@property (nonatomic) unsigned long long startTime;
@property (retain, nonatomic) NSMutableArray *arrPlayInfo;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long videoPlaybackTime;

- (id)init;
- (void).cxx_destruct;

@end
