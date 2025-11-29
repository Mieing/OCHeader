@interface UploadTaskUtils : NSObject

+ (BOOL)isUploadSameMsg:(id)a0 compare:(id)a1;
+ (id)findRecordDataInList:(id)a0 WithLocalDataId:(id)a1;
+ (void)clearLocalProperty:(id)a0;
+ (id)getTempFilePath:(id)a0 data:(id)a1;
+ (id)getFilePath:(id)a0 data:(id)a1;
+ (id)getMiddleFilePath:(id)a0 data:(id)a1;
+ (id)getThumbFilePath:(id)a0 data:(id)a1;
+ (int)getCdnFileTypeWithDataField:(id)a0;
+ (BOOL)shouldUseCgiUpload:(id)a0 data:(id)a1;

@end
