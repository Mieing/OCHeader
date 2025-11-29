@class NSString, NSDictionary;

@interface AWEPOICityDetailTagItem : NSObject

@property (copy, nonatomic) NSString *requestString;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) BOOL didTrackTabShow;
@property (copy, nonatomic) NSString *displayText;
@property (nonatomic) long long optionType;
@property (copy, nonatomic) NSString *tabId;
@property (nonatomic) BOOL selected;
@property (nonatomic) struct CGPoint { double x; double y; } pageOffset;
@property (copy, nonatomic) id /* block */ didClickTag;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
