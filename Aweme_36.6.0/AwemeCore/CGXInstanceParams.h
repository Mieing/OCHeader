@class NSString;

@interface CGXInstanceParams : NSObject

@property (retain, nonatomic) NSString *gameId;
@property (retain, nonatomic) NSString *channel;
@property (nonatomic) long long orientation;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) double initTS;

- (void).cxx_destruct;

@end
