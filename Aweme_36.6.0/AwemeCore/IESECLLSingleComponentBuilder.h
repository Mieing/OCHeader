@class IESECLLLayoutableBuilder;

@interface IESECLLSingleComponentBuilder : IESECLLContainerBuilder {
    Class _builderClass;
}

@property (readonly, nonatomic) IESECLLLayoutableBuilder *associatedBuilder;

- (id)initWithAssociatedBuilderType:(Class)a0;

@end
