@class NSString, NSDictionary;

@interface MAAnnotationInfoUploadInfo : NSObject <NSCopying> {
    NSDictionary *_infoDic;
}

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;

- (id)initWithMAAnnotation:(id)a0;
- (void).cxx_destruct;
- (id)dictionary;
- (BOOL)equalTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
