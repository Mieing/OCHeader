@class NSString;

@interface AWEStudioPostGoodsSeedingModel : NSObject <NSCopying>

@property (retain, nonatomic) NSString *seedID;
@property (retain, nonatomic) NSString *draftID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *views;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSString *referSeedID;
@property (retain, nonatomic) NSString *referSeedName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
