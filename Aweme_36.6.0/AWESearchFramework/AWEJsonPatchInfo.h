@class AWEJsonPatchPath;

@interface AWEJsonPatchInfo : NSObject

@property (nonatomic) long long opType;
@property (retain, nonatomic) id valueObject;
@property (retain, nonatomic) AWEJsonPatchPath *path;

+ (id)createJsonPatchInfoWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
