@class NSArray;

@interface AWEIMLiveGroupOwnRoomModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *roomIds;
@property (copy, nonatomic) NSArray *roomIdStrings;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
