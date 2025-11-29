@class NSNumber;

@interface AWEProfileCompletion : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *avatar;
@property (retain, nonatomic) NSNumber *nickname;
@property (retain, nonatomic) NSNumber *shortId;
@property (retain, nonatomic) NSNumber *gender;
@property (retain, nonatomic) NSNumber *birthday;
@property (retain, nonatomic) NSNumber *school;
@property (retain, nonatomic) NSNumber *signature;
@property (retain, nonatomic) NSNumber *location;
@property (retain, nonatomic) NSNumber *hometown;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
