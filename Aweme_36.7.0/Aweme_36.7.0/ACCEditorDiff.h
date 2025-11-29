@class NSString, NSDictionary;

@interface ACCEditorDiff : NSObject

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *subtype;
@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) BOOL editCanvas;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (id)track_format;
- (id)typeString;
- (id)jsonDict;
- (void).cxx_destruct;

@end
