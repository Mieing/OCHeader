@class NSString;

@interface WCFinderProfileInfoSpecialPadding : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long preViewTag;
@property (nonatomic) long long nextViewTag;
@property (nonatomic) double padding;

+ (id)createWithName:(id)a0 padding:(double)a1;

- (void).cxx_destruct;

@end
