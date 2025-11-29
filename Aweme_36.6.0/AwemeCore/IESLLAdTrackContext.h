@class NSString, NSNumber, NSDictionary;

@interface IESLLAdTrackContext : NSObject <NSCopying>

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (copy, nonatomic) NSString *groupID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
