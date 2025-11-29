@class NSString;

@interface IESECFeedResourceCardButtonModel : IESECFeedResourceCardBaseNode

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *link;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
