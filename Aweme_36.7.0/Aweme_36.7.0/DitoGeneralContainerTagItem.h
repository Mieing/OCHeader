@class NSString, NSDictionary;

@interface DitoGeneralContainerTagItem : NSObject

@property (copy, nonatomic) NSString *requestString;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) BOOL didTrackTabShow;
@property (copy, nonatomic) NSString *displayText;
@property (nonatomic) long long count;
@property (nonatomic) long long optionType;
@property (copy, nonatomic) NSString *tabId;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) id /* block */ didClickTag;
@property (copy, nonatomic) NSString *selectedImageURL;
@property (copy, nonatomic) NSString *unselectedImageURL;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
