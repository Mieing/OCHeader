@interface GXTemplateReader : NSObject

- (id)readTemplateContenttWithFolderPath:(id)a0 templateId:(id)a1 templateVersion:(id)a2;
- (id)loadTextTemplateWithFolderPath:(id)a0 templateId:(id)a1 templateVersion:(id)a2;
- (id)loadBinaryTemplateWithFilePath:(id)a0 templateId:(id)a1 templateVersion:(id)a2;
- (id)readTemplateInfo:(id)a0;

@end
