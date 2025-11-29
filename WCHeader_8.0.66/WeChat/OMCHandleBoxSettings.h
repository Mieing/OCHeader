@interface OMCHandleBoxSettings : NSObject {
    struct XMSHandleBoxSettings { struct unique_ptr<XMSHandleBoxSettings::XMSHandleBoxSettingsOpaque, std::default_delete<XMSHandleBoxSettings::XMSHandleBoxSettingsOpaque>> { struct __compressed_pair<XMSHandleBoxSettings::XMSHandleBoxSettingsOpaque *, std::default_delete<XMSHandleBoxSettings::XMSHandleBoxSettingsOpaque>> { struct XMSHandleBoxSettingsOpaque *__value_; } __ptr_; } _opaque; } _backingSettings;
}

@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } position;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } scale;
@property (readonly, nonatomic) double rotation;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsets;
@property (readonly, nonatomic) unsigned int enabledButtonIDBits;
@property (readonly, nonatomic) BOOL isNormalized;

- (id)initWithBackingSettings:(const void *)a0;
- (id)normalizedHandleBoxSettingsWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)denormalizedHandleBoxSettingsWithSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
