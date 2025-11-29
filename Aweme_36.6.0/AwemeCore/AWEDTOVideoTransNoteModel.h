@class NSString;

@interface AWEDTOVideoTransNoteModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL publishVideoTransNote;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
