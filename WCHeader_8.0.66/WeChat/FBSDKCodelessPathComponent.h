@class NSString;

@interface FBSDKCodelessPathComponent : NSObject

@property (readonly, copy, nonatomic) NSString *className;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *hint;
@property (readonly, copy, nonatomic) NSString *desc;
@property (readonly, nonatomic) int index;
@property (readonly, nonatomic) int tag;
@property (readonly, nonatomic) int section;
@property (readonly, nonatomic) int row;
@property (readonly, nonatomic) int matchBitmask;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;

@end
