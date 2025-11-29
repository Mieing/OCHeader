@interface IESLLTempoGlobalConfigManager : NSObject

@property (nonatomic) BOOL optDiffReuse;
@property (nonatomic) BOOL optUpdateImmediately;
@property (nonatomic) BOOL optResourceLoader;
@property (nonatomic) int optImagePreload;
@property (nonatomic) int optImageWidget;
@property (nonatomic) BOOL preventDuplicatePredecode;
@property (nonatomic) BOOL enableJSCore;

+ (id)shared;

@end
