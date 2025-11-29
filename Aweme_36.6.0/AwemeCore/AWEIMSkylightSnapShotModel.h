@class NSArray, AWEIMSkylightFriendWholeDotModel;

@interface AWEIMSkylightSnapShotModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *businessList;
@property (copy, nonatomic) NSArray *friendList;
@property (retain, nonatomic) AWEIMSkylightFriendWholeDotModel *whloeDotModel;
@property (nonatomic) double now;

- (id)transformToSectionData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
