@class NSString;

@interface CharacterData : Node

@property (readonly, nonatomic) NSString *data;
@property (readonly, nonatomic) unsigned long long length;

- (void).cxx_destruct;

@end
