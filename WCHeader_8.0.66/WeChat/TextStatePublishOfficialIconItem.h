@class TextStateIcon;

@interface TextStatePublishOfficialIconItem : NSObject

@property (retain, nonatomic) TextStateIcon *icon;
@property (nonatomic) unsigned long long descriptionLineNumber;
@property (nonatomic) double itemHeight;

- (id)initWithIcon:(id)a0;
- (void)updateItemHeight;
- (void).cxx_destruct;

@end
