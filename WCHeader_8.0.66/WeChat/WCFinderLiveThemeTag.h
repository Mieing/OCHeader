@class NSString;

@interface WCFinderLiveThemeTag : NSObject

@property (retain, nonatomic) NSString *tagText;
@property (retain, nonatomic) NSString *tagValue;
@property (nonatomic) unsigned int containerType;

+ (id)finderLiveThemeTagFrom:(id)a0;

- (id)toFinderLiveThemeTag;
- (void).cxx_destruct;

@end
