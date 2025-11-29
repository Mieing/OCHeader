@class NSMutableArray;

@interface StoryRingInfoV2 : GPBMessage

@property (nonatomic) long long version;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSMutableArray *storyRingsArray;
@property (readonly, nonatomic) unsigned long long storyRingsArray_Count;

+ (id)descriptor;

- (id)storyRingsArray;
- (long long)version;

@end
