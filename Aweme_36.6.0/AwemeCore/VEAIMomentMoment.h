@class NSString, NSArray;

@interface VEAIMomentMoment : NSObject

@property (copy, nonatomic) NSString *identity;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long coverId;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSArray *materialIds;
@property (nonatomic) long long templateId;
@property (nonatomic) long long momentSource;

- (void).cxx_destruct;

@end
