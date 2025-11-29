@class MMTextStateMediaUploadTaskInfo, NSString;

@interface MMTextStateMediaDataPB : MMObject <PBCoding>

@property (retain, nonatomic) MMTextStateMediaUploadTaskInfo *textStateMediaUploadTaskInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_textStateMediaUploadTaskInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
