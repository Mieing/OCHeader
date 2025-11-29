@class NSString;

@interface AWENewStoryIndexModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *itemID;
@property (nonatomic) long long index;
@property (nonatomic) long long imageCount;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL isFromDraft;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
