@class NSString;

@interface BrandExposeLog : NSObject

@property (nonatomic) unsigned int timestamp;
@property (retain, nonatomic) NSString *bizUsername;
@property (retain, nonatomic) NSString *mid;
@property (retain, nonatomic) NSString *idx;
@property (nonatomic) unsigned int rank;
@property (nonatomic) BOOL isTop;
@property (nonatomic) BOOL isRedDot;
@property (nonatomic) BOOL isClicked;

- (id)logString;
- (void).cxx_destruct;

@end
