@class NSString, NSArray;

@interface HTSLiveExpandToolbarItem : HTSLiveToolbarItem

@property (copy, nonatomic) NSString *expandTitle;
@property (retain, nonatomic) NSArray *expandItems;
@property (copy, nonatomic) NSArray *highLightItems;
@property (nonatomic) BOOL expandable;
@property (copy, nonatomic) id /* block */ canExpand;
@property (copy, nonatomic) id /* block */ expandItemCanTapped;
@property (copy, nonatomic) id /* block */ expandItemShowed;

- (BOOL)containItem:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
