@class NSString, NSMutableArray;

@interface Sheet : WXPBGeneratedMessage

@property (nonatomic) unsigned int index;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *tiles;

+ (void)initialize;

@end
