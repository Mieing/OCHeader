@class NSMutableArray;

@interface IESECLiveStackViewMaker : NSObject

@property (retain, nonatomic) NSMutableArray *setters;
@property (readonly, nonatomic) id /* block */ text;
@property (readonly, nonatomic) id /* block */ attributedText;
@property (readonly, nonatomic) id /* block */ image;
@property (readonly, nonatomic) id /* block */ imageName;
@property (readonly, nonatomic) id /* block */ webImage;
@property (readonly, nonatomic) id /* block */ view;
@property (readonly, nonatomic) id /* block */ space;

- (void).cxx_destruct;
- (id)init;

@end
