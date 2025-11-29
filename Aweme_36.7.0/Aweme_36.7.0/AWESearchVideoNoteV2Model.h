@class NSArray, NSString;

@interface AWESearchVideoNoteV2Model : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *notes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)notesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
