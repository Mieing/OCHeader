@class NSString;

@interface MMLiteAppOpenParam : NSObject

@property (nonatomic) long long isHalfScreen;
@property (nonatomic) double heightPercent;
@property (retain, nonatomic) NSString *page;
@property (retain, nonatomic) NSString *query;

- (id)init;
- (void).cxx_destruct;

@end
