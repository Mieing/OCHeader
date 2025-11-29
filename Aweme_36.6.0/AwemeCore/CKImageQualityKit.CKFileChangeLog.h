@class NSDictionary, NSString;

@interface CKImageQualityKit.CKFileChangeLog : _TtCs12_SwiftObject <CKChangeLog> {
    void /* unknown type, empty encoding */ file;
    void /* function */ action;
    void /* function */ creationId;
    void /* function */ type;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pContent;
}

@property (nonatomic, readonly) NSDictionary *content;
@property (nonatomic, copy) NSString *action;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, copy) NSString *creationId;
@property (nonatomic, copy) NSString *type;

- (id)track_format;

@end
