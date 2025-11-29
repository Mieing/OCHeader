@class AUCDTODataEditor, AUCDTOBasicEditor, AUCDTOFeatureEditor;

@interface AUCDTOPageEditor : AUCDTOPageConfig

@property (retain, nonatomic) AUCDTODataEditor *data;
@property (retain, nonatomic) AUCDTOBasicEditor *basic;
@property (retain, nonatomic) AUCDTOFeatureEditor *feature;

- (void).cxx_destruct;
- (id)init;

@end
