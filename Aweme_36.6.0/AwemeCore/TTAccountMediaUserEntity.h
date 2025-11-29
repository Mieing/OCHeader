@class NSNumber, NSString;

@interface TTAccountMediaUserEntity : TTAccountBaseEntity

@property (retain, nonatomic) NSNumber *mediaID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatarURL;
@property (nonatomic) BOOL userVerified;
@property (nonatomic) BOOL displayAppOcrEntrance;

- (id)initWithMediaUserModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
