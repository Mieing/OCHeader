@class NSString;

@interface WeChatEmotionSectionInfo : MMObject

@property (nonatomic) unsigned long long sectionType;
@property (nonatomic) long long numOfItems;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *title;

- (void).cxx_destruct;

@end
