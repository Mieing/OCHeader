@class NSString;

@interface InviteSourceInfo : MMObject

@property (nonatomic) unsigned int sourceTag;
@property (copy, nonatomic) NSString *sourceName;
@property (copy, nonatomic) NSString *sourceIconName;
@property (nonatomic) SEL sourceActionSel;

- (void).cxx_destruct;

@end
