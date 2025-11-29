@class NSString, NSNumber, BizPhotoExtInfo;

@interface BizSelectPhotoInfo : NSObject

@property (copy, nonatomic) NSString *photoId;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) BizPhotoExtInfo *photoExtInfo;
@property (copy, nonatomic) NSString *mimeType;

+ (id)makeWithPhotoId:(id)a0 path:(id)a1 width:(id)a2 height:(id)a3 photoExtInfo:(id)a4 mimeType:(id)a5;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
