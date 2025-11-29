@class NSString;

@interface AWEAnchorPriorityInfo : NSObject

@property (nonatomic) long long anchorType;
@property (nonatomic) long long subType;
@property (copy, nonatomic) NSString *scene;

- (id)initWithAnchorType:(long long)a0 subType:(long long)a1 scene:(id)a2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
