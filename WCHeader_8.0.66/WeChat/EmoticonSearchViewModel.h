@class NSArray;

@interface EmoticonSearchViewModel : NSObject

@property (nonatomic) int state;
@property (retain, nonatomic) NSArray *recommendWraps;

- (BOOL)onLoading;
- (id)errorTips;
- (id)md5s;
- (void).cxx_destruct;

@end
