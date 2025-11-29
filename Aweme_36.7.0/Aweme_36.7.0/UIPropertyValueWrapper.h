@interface UIPropertyValueWrapper : NSObject {
    struct UIPropertyValue { void /* function */ **x0; int x1; } *value_;
}

- (struct optional<relax::ExternalUIPropertyType> { union { char x0; int x1; } x0; BOOL x1; })GetExternalType;
- (struct UIPropertyValue { void /* function */ **x0; int x1; } *)getValue;
- (void)dealloc;
- (id)initWith:(struct UIPropertyValue { void /* function */ **x0; int x1; } *)a0;

@end
