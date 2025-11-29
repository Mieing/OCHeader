@class NSArray;

@interface AWEEditKitImpl.EditMediaGenreTransferContext : NSObject <AEKEditMediaGenreTransferContext> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_supportSingle2Multiple;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tryPreserveDuration;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tryAlignTTSDuration;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fixedFrameDimension;
    void /* unknown type, empty encoding */ $__lazy_storage_$_coverImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_syncOrigData;
    void /* unknown type, empty encoding */ $__lazy_storage_$_syncMode;
    void /* unknown type, empty encoding */ $__lazy_storage_$_runState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_resourceURLS;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageCount;
    void /* unknown type, empty encoding */ $__lazy_storage_$_videoCount;
    void /* unknown type, empty encoding */ $__lazy_storage_$_livephotoCount;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sourceMediaGenre;
    void /* unknown type, empty encoding */ $__lazy_storage_$_targetMediaGenre;
    void /* unknown type, empty encoding */ scene;
    void /* unknown type, empty encoding */ resources;
    void /* unknown type, empty encoding */ fpContext;
    void /* unknown type, empty encoding */ subscriberSet;
}

@property (nonatomic) long long imageCount;
@property (nonatomic) long long videoCount;
@property (nonatomic) long long livephotoCount;
@property (nonatomic) unsigned long long sourceMediaGenre;
@property (nonatomic) unsigned long long targetMediaGenre;
@property (nonatomic, readonly) NSArray *resourceArray;

- (void).cxx_destruct;
- (id)init;

@end
